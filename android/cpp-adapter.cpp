#include <jni.h>
#include "react-native-quick-qrcode.h"

extern "C"
JNIEXPORT jdouble JNICALL
Java_com_quickqrcode_QuickQrcodeModule_nativeMultiply(JNIEnv *env, jclass type, jdouble a, jdouble b) {
    return quickqrcode::multiply(a, b);
}
