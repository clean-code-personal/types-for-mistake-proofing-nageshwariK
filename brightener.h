#include <cstdint>
#include "image.h"

using namespace std;

shared_ptr<Image> BrightenWholeImage(const shared_ptr<Image> inputImage, int& attenuatedPixelCount) ;
shared_ptr<Image> AddBrighteningImage(const shared_ptr<Image> inputImage, const shared_ptr<Image> imageToAdd,
    int& attenuatedPixelCount);
