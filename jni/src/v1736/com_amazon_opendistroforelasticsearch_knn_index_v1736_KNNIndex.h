/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_amazon_opendistroforelasticsearch_knn_index_v1736_KNNIndex */

#ifndef _Included_com_amazon_opendistroforelasticsearch_knn_index_v1736_KNNIndex
#define _Included_com_amazon_opendistroforelasticsearch_knn_index_v1736_KNNIndex
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_amazon_opendistroforelasticsearch_knn_index_v1736_KNNIndex
 * Method:    saveIndex
 * Signature: ([I[[FLjava/lang/String;[Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_amazon_opendistroforelasticsearch_knn_index_v1736_KNNIndex_saveIndex
  (JNIEnv *, jclass, jintArray, jobjectArray, jstring, jobjectArray);

/*
 * Class:     com_amazon_opendistroforelasticsearch_knn_index_v1736_KNNIndex
 * Method:    queryIndex
 * Signature: (J[FI[Ljava/lang/String;)[Lcom/amazon/opendistroforelasticsearch/knn/index/KNNQueryResult;
 */
JNIEXPORT jobjectArray JNICALL Java_com_amazon_opendistroforelasticsearch_knn_index_v1736_KNNIndex_queryIndex
  (JNIEnv *, jclass, jlong, jfloatArray, jint, jobjectArray);

/*
 * Class:     com_amazon_opendistroforelasticsearch_knn_index_v1736_KNNIndex
 * Method:    init
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_com_amazon_opendistroforelasticsearch_knn_index_v1736_KNNIndex_init
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_amazon_opendistroforelasticsearch_knn_index_v1736_KNNIndex
 * Method:    gc
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_com_amazon_opendistroforelasticsearch_knn_index_v1736_KNNIndex_gc
  (JNIEnv *, jclass, jlong);

#ifdef __cplusplus
}
#endif
#endif