#ifndef YARDTODORMONTTRACKMODEL_H
#define YARDTODORMONTTRACKMODEL_H
#include "Block.h"

class
        YardDormontTrackModel{
        public:
            Block *track[12];
            YardDormontTrackModel();
            double returnSpeedLimit(int);
            double returnTrackBlockLength(int);
            int returnTrackModelSize();

        private:
            int trackSize = 12;

};

#endif // YARDTODORMONTTRACKMODEL_H
