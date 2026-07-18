/* Header for Android JNI entry points */
#include <jni.h>

#ifndef _Included_test_clpeakarmfix_BenchmarkRepository
#define _Included_test_clpeakarmfix_BenchmarkRepository
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     test.clpeakarmfix.BenchmarkRepository
 * Method:    launchClpeak
 * Signature: (I[Ljava/lang/String;)I
 */
JNIEXPORT jint JNICALL Java_test_clpeakarmfix_BenchmarkRepository_launchClpeak
(JNIEnv *, jobject, jint, jobjectArray);

/*
 * Class:     test.clpeakarmfix.BenchmarkRepository
 * Method:    nativeEnumerateBackends
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_test_clpeakarmfix_BenchmarkRepository_nativeEnumerateBackends
(JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif


#ifndef _Included_test_clpeakarmfix_MainActivity
#define _Included_test_clpeakarmfix_MainActivity
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     test.clpeakarmfix.AboutBottomSheet
 * Method:    nativeGetVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_test_clpeakarmfix_AboutBottomSheet_nativeGetVersion
(JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
