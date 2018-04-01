/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class apron_Manager */

#ifndef _Included_apron_Manager
#define _Included_apron_Manager
#ifdef __cplusplus
extern "C" {
#endif
#undef apron_Manager_FUNID_COPY
#define apron_Manager_FUNID_COPY 1L
#undef apron_Manager_FUNID_FREE
#define apron_Manager_FUNID_FREE 2L
#undef apron_Manager_FUNID_SIZE
#define apron_Manager_FUNID_SIZE 3L
#undef apron_Manager_FUNID_MINIMIZE
#define apron_Manager_FUNID_MINIMIZE 4L
#undef apron_Manager_FUNID_CANONICALIZE
#define apron_Manager_FUNID_CANONICALIZE 5L
#undef apron_Manager_FUNID_HASH
#define apron_Manager_FUNID_HASH 6L
#undef apron_Manager_FUNID_APPROXIMATE
#define apron_Manager_FUNID_APPROXIMATE 7L
#undef apron_Manager_FUNID_FPRINT
#define apron_Manager_FUNID_FPRINT 8L
#undef apron_Manager_FUNID_FPRINTDIFF
#define apron_Manager_FUNID_FPRINTDIFF 9L
#undef apron_Manager_FUNID_FDUMP
#define apron_Manager_FUNID_FDUMP 10L
#undef apron_Manager_FUNID_SERIALIZE_RAW
#define apron_Manager_FUNID_SERIALIZE_RAW 11L
#undef apron_Manager_FUNID_DESERIALIZE_RAW
#define apron_Manager_FUNID_DESERIALIZE_RAW 12L
#undef apron_Manager_FUNID_BOTTOM
#define apron_Manager_FUNID_BOTTOM 13L
#undef apron_Manager_FUNID_TOP
#define apron_Manager_FUNID_TOP 14L
#undef apron_Manager_FUNID_OF_BOX
#define apron_Manager_FUNID_OF_BOX 15L
#undef apron_Manager_FUNID_DIMENSION
#define apron_Manager_FUNID_DIMENSION 16L
#undef apron_Manager_FUNID_IS_BOTTOM
#define apron_Manager_FUNID_IS_BOTTOM 17L
#undef apron_Manager_FUNID_IS_TOP
#define apron_Manager_FUNID_IS_TOP 18L
#undef apron_Manager_FUNID_IS_LEQ
#define apron_Manager_FUNID_IS_LEQ 19L
#undef apron_Manager_FUNID_IS_EQ
#define apron_Manager_FUNID_IS_EQ 20L
#undef apron_Manager_FUNID_IS_DIMENSION_UNCONSTRAINED
#define apron_Manager_FUNID_IS_DIMENSION_UNCONSTRAINED 21L
#undef apron_Manager_FUNID_SAT_INTERVAL
#define apron_Manager_FUNID_SAT_INTERVAL 22L
#undef apron_Manager_FUNID_SAT_LINCONS
#define apron_Manager_FUNID_SAT_LINCONS 23L
#undef apron_Manager_FUNID_SAT_TCONS
#define apron_Manager_FUNID_SAT_TCONS 24L
#undef apron_Manager_FUNID_BOUND_DIMENSION
#define apron_Manager_FUNID_BOUND_DIMENSION 25L
#undef apron_Manager_FUNID_BOUND_LINEXPR
#define apron_Manager_FUNID_BOUND_LINEXPR 26L
#undef apron_Manager_FUNID_BOUND_TEXPR
#define apron_Manager_FUNID_BOUND_TEXPR 27L
#undef apron_Manager_FUNID_TO_BOX
#define apron_Manager_FUNID_TO_BOX 28L
#undef apron_Manager_FUNID_TO_LINCONS_ARRAY
#define apron_Manager_FUNID_TO_LINCONS_ARRAY 29L
#undef apron_Manager_FUNID_TO_TCONS_ARRAY
#define apron_Manager_FUNID_TO_TCONS_ARRAY 30L
#undef apron_Manager_FUNID_TO_GENERATOR_ARRAY
#define apron_Manager_FUNID_TO_GENERATOR_ARRAY 31L
#undef apron_Manager_FUNID_MEET
#define apron_Manager_FUNID_MEET 32L
#undef apron_Manager_FUNID_MEET_ARRAY
#define apron_Manager_FUNID_MEET_ARRAY 33L
#undef apron_Manager_FUNID_MEET_LINCONS_ARRAY
#define apron_Manager_FUNID_MEET_LINCONS_ARRAY 34L
#undef apron_Manager_FUNID_MEET_TCONS_ARRAY
#define apron_Manager_FUNID_MEET_TCONS_ARRAY 35L
#undef apron_Manager_FUNID_JOIN
#define apron_Manager_FUNID_JOIN 36L
#undef apron_Manager_FUNID_JOIN_ARRAY
#define apron_Manager_FUNID_JOIN_ARRAY 37L
#undef apron_Manager_FUNID_ADD_RAY_ARRAY
#define apron_Manager_FUNID_ADD_RAY_ARRAY 38L
#undef apron_Manager_FUNID_ASSIGN_LINEXPR_ARRAY
#define apron_Manager_FUNID_ASSIGN_LINEXPR_ARRAY 39L
#undef apron_Manager_FUNID_SUBSTITUTE_LINEXPR_ARRAY
#define apron_Manager_FUNID_SUBSTITUTE_LINEXPR_ARRAY 40L
#undef apron_Manager_FUNID_ASSIGN_TEXPR_ARRAY
#define apron_Manager_FUNID_ASSIGN_TEXPR_ARRAY 41L
#undef apron_Manager_FUNID_SUBSTITUTE_TEXPR_ARRAY
#define apron_Manager_FUNID_SUBSTITUTE_TEXPR_ARRAY 42L
#undef apron_Manager_FUNID_ADD_DIMENSIONS
#define apron_Manager_FUNID_ADD_DIMENSIONS 43L
#undef apron_Manager_FUNID_REMOVE_DIMENSIONS
#define apron_Manager_FUNID_REMOVE_DIMENSIONS 44L
#undef apron_Manager_FUNID_PERMUTE_DIMENSIONS
#define apron_Manager_FUNID_PERMUTE_DIMENSIONS 45L
#undef apron_Manager_FUNID_FORGET_ARRAY
#define apron_Manager_FUNID_FORGET_ARRAY 46L
#undef apron_Manager_FUNID_EXPAND
#define apron_Manager_FUNID_EXPAND 47L
#undef apron_Manager_FUNID_FOLD
#define apron_Manager_FUNID_FOLD 48L
#undef apron_Manager_FUNID_WIDENING
#define apron_Manager_FUNID_WIDENING 49L
#undef apron_Manager_FUNID_CLOSURE
#define apron_Manager_FUNID_CLOSURE 50L
#undef apron_Manager_SCALAR_DOUBLE
#define apron_Manager_SCALAR_DOUBLE 0L
#undef apron_Manager_SCALAR_MPQ
#define apron_Manager_SCALAR_MPQ 1L
#undef apron_Manager_SCALAR_MPFR
#define apron_Manager_SCALAR_MPFR 2L
/*
 * Class:     apron_Manager
 * Method:    finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_apron_Manager_finalize
  (JNIEnv *, jobject);

/*
 * Class:     apron_Manager
 * Method:    class_init
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_apron_Manager_class_1init
  (JNIEnv *, jclass);

/*
 * Class:     apron_Manager
 * Method:    getLibrary
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_apron_Manager_getLibrary
  (JNIEnv *, jobject);

/*
 * Class:     apron_Manager
 * Method:    getVersion
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_apron_Manager_getVersion
  (JNIEnv *, jobject);

/*
 * Class:     apron_Manager
 * Method:    getAlgorithm
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_apron_Manager_getAlgorithm
  (JNIEnv *, jobject, jint);

/*
 * Class:     apron_Manager
 * Method:    getTimeout
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_apron_Manager_getTimeout
  (JNIEnv *, jobject, jint);

/*
 * Class:     apron_Manager
 * Method:    getMaxObjectSize
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_apron_Manager_getMaxObjectSize
  (JNIEnv *, jobject, jint);

/*
 * Class:     apron_Manager
 * Method:    getFlagExactWanted
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_apron_Manager_getFlagExactWanted
  (JNIEnv *, jobject, jint);

/*
 * Class:     apron_Manager
 * Method:    getFlagBestWanted
 * Signature: (I)Z
 */
JNIEXPORT jboolean JNICALL Java_apron_Manager_getFlagBestWanted
  (JNIEnv *, jobject, jint);

/*
 * Class:     apron_Manager
 * Method:    setAlgorithm
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_apron_Manager_setAlgorithm
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     apron_Manager
 * Method:    setTimeout
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_apron_Manager_setTimeout
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     apron_Manager
 * Method:    setMaxObjectSize
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_apron_Manager_setMaxObjectSize
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     apron_Manager
 * Method:    setFlagExactWanted
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_apron_Manager_setFlagExactWanted
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     apron_Manager
 * Method:    setFlagBestWanted
 * Signature: (IZ)V
 */
JNIEXPORT void JNICALL Java_apron_Manager_setFlagBestWanted
  (JNIEnv *, jobject, jint, jboolean);

/*
 * Class:     apron_Manager
 * Method:    wasExact
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_apron_Manager_wasExact
  (JNIEnv *, jobject);

/*
 * Class:     apron_Manager
 * Method:    wasBest
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_apron_Manager_wasBest
  (JNIEnv *, jobject);

/*
 * Class:     apron_Manager
 * Method:    getPreferedScalarType
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_apron_Manager_getPreferedScalarType
  (JNIEnv *, jobject);

/*
 * Class:     apron_Manager
 * Method:    setPreferedScalarType
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_apron_Manager_setPreferedScalarType
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
