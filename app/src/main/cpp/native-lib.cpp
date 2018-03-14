#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_mvpdemo_zhang_com_jnidemo_JNIUtils_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
extern "C"
JNIEXPORT jstring JNICALL
Java_mvpdemo_zhang_com_jnidemo_JNIUtils_getHelloJni(JNIEnv *env, jobject instance) {

    // TODO


    return env->NewStringUTF("Hello Jni，欢迎来到我的世界...");
}extern "C"
JNIEXPORT jstring JNICALL
Java_mvpdemo_zhang_com_jnidemo_JNIUtils_gethelloWord(JNIEnv *env, jobject instance) {

    // TODO


    return env->NewStringUTF("hjhdkafka");
}