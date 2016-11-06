#ifndef BAGOFWORDS_LBPDESCRIPTOR_H
#define BAGOFWORDS_LBPDESCRIPTOR_H
#include "VisualDictionary.h"
#include <opencv2/imgproc.hpp>

class LBPDescriptor
{
public:
    static void computeLBPfeatures(const Mat & image, Mat & lbpFeatures, const vector<KeyPoint> & keyPoints);
};


#endif //BAGOFWORDS_LBPDESCRIPTOR_H