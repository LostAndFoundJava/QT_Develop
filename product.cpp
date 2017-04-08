#include "product.h"

Product::Product(QObject *parent) :
    QObject(parent)
{

}

QString Product::getProductNumber() {
    return productNumber;
}

void Product::setProductNumber(QString productNumber) {
    this->productNumber = productNumber;
}

QString Product::getProductName() {
    return productName;
}

void Product::setProductName(QString productName) {
    this->productName = productName;
}

QString Product::getProductLength() {
    return productLength;
}
void Product::setProductLength(QString productLength) {
    this->productLength = productLength;
}
QString Product::getProductSpeed() {
    return productSpeed;
}
void Product::setProductSpeed(QString productSpeed) {
    this->productSpeed = productSpeed;
}
QString Product::getProductPackage() {
    return productPackage;
}

void Product::setProductPackage(QString productPackage) {
    this->productPackage = productPackage;
}

QString Product::getProductFeatures() {
    return productFeatures;
}

void Product::setProductFeatures(QString productFeatures) {
    this->productFeatures = productFeatures;
}

QString Product::getProductDetect() {
    return productDetect;
}

void Product::setProductDetect(QString productDetect) {
    this->productDetect = productDetect;
}

QString Product::getProductPhotoelectricTime() {
    return productPhotoelectricTime;
}

void Product::setProductPhotoelectricTime(QString productPhotoelectricTime) {
    this->productPhotoelectricTime = productPhotoelectricTime;
}

QString Product::getProductAutomaticFlag() {
    return productAutomaticFlag;
}

void Product::setProductAutomaticFlag(QString productAutomaticFlag) {
    this->productAutomaticFlag = productAutomaticFlag;
}

QString Product::getProductExcluseiveSetting() {
    return productExcluseiveSetting;
}

void Product::setProductExcluseiveSetting(QString productExcluseiveSetting) {
    this->productExcluseiveSetting = productExcluseiveSetting;
}
