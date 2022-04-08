#include "PLC.h"
#include <QCoreApplication>
#include <QFile>
#include <QTextStream>
#include <QDebug>
#include <QRegularExpression>

//Block = 62 = true; block = 152 = false

PLC::PLC(int block, int speed, int ways_block)
{
    curr_block = block;
    suggested_speed = speed;
    wayside_block = ways_block;
}

bool PLC::Run_PLC()
{
    //Object for opening file
    QFile infile("trent/ECE1140-Group2/Group2_TrainSystem");
    QTextStream stream(&infile);
    QStringList list_second;
    QString str;

    //For parsing the PLC.txt file
    int i = 1;
    int j = 0;

    //Error chec for opening file
    if(!infile.exists())
    {
        qCritical() << "Could not open file";
        return false;
    }
    if(!infile.open(QIODevice::ReadOnly))
    {
        qCritical() << infile.errorString();
        return false;
    }


    //Read first line
    store[0] = stream.readLine();

    //Read the text file and take track data to do boolean calculations
    if(store[0] == "Start")
    {
        while(1)
        {
            str = stream.readLine();
            list_second = str.split(QRegularExpression("\\s+"));

            if(list_second.at(0) == "Ld")
            {
                store[i+1] = list_second.at(1);

                store_int[j] = store[i+1].toInt();

                j++;
            }
            else if(list_second.at(0) == "AND")
            {
                store[i+1] = list_second.at(1);

                if(store[i+1] == "wayside_block")
                {
                    store_int[j] = wayside_block;
                    j++;
                }
                else
                {
                    store_int[i] = store[i+1].toInt();
                    j++;
                }
            }
            else if(list_second.at(0) == "str")
            {
                    if(curr_block == store_int[0])
                    {
                        save_block.data = store_int[0];
                        save_block.state = false;
                    }
                    else if(curr_block == store_int[2])
                    {
                        save_block.data = store_int[2];
                        save_block.state = true;
                    }

            }

            else if(list_second.at(0) == "end")
            {
                break;
            }

            i++;
        }
    }


    infile.close();

    return true;

}


