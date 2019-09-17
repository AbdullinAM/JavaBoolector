/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_jetbrains_research_boolector_Native */

#ifndef _Included_org_jetbrains_research_boolector_Native
#define _Included_org_jetbrains_research_boolector_Native
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    btor
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jetbrains_research_boolector_Native_btor
  (JNIEnv *, jclass);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    btorRelease
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_jetbrains_research_boolector_Native_btorRelease
  (JNIEnv *, jclass);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    var
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_var
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    releaseNode
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_jetbrains_research_boolector_Native_releaseNode
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    bitvecSort
 * Signature: (I)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_bitvecSort
  (JNIEnv *, jclass, jint);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    releaseSort
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_jetbrains_research_boolector_Native_releaseSort
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    isBitvecSort
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jetbrains_research_boolector_Native_isBitvecSort
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    isArraySort
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jetbrains_research_boolector_Native_isArraySort
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_getWidth
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    not
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_not
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    add
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_add
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    and
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_and
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    or
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_or
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    xor
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_xor
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    neg
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_neg
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    eq
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_eq
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    copy
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_copy
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    assertForm
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_jetbrains_research_boolector_Native_assertForm
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getSat
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_getSat
  (JNIEnv *, jclass);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sub
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sub
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    mul
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_mul
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sdiv
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sdiv
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    udiv
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_udiv
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    smod
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_smod
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    urem
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_urem
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sgt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sgt
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sgte
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sgte
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    slt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_slt
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    slte
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_slte
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sll
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sll
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    srl
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_srl
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sra
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sra
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    implies
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_implies
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    iff
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_iff
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    concat
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_concat
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    cond
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_cond
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    zero
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_zero
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    constBitvec
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_constBitvec
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    isBoolSort
 * Signature: (J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jetbrains_research_boolector_Native_isBoolSort
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    constNodeTrue
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_constNodeTrue
  (JNIEnv *, jclass);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    constNodeFalse
 * Signature: ()J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_constNodeFalse
  (JNIEnv *, jclass);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getSort
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_getSort
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getId
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_getId
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getSymbol
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jetbrains_research_boolector_Native_getSymbol
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    simplify
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_simplify
  (JNIEnv *, jclass);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    constInt
 * Signature: (IJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_constInt
  (JNIEnv *, jclass, jint, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    sext
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_sext
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    uext
 * Signature: (JI)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_uext
  (JNIEnv *, jclass, jlong, jint);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    slice
 * Signature: (JII)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_slice
  (JNIEnv *, jclass, jlong, jint, jint);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    arraySort
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_arraySort
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    array
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_array
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    read
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_read
  (JNIEnv *, jclass, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    write
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_write
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    param
 * Signature: (JLjava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_param
  (JNIEnv *, jclass, jlong, jstring);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    fun
 * Signature: ([JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_fun
  (JNIEnv *, jclass, jlongArray, jint, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    apply
 * Signature: ([JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_apply
  (JNIEnv *, jclass, jlongArray, jint, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    printModel
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jetbrains_research_boolector_Native_printModel
  (JNIEnv *, jclass);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getBits
 * Signature: (J)Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jetbrains_research_boolector_Native_getBits
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    constLong
 * Signature: (Ljava/lang/String;J)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_constLong
  (JNIEnv *, jclass, jstring, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    forAll
 * Signature: ([JIJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_forAll
  (JNIEnv *, jclass, jlongArray, jint, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    boolectorAssert
 * Signature: (Ljava/lang/String;J)Z
 */
JNIEXPORT jboolean JNICALL Java_org_jetbrains_research_boolector_Native_boolectorAssert
  (JNIEnv *, jclass, jstring, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    kindNode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_kindNode
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    constArray
 * Signature: (JJJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_constArray
  (JNIEnv *, jclass, jlong, jlong, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getWidthNode
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_getWidthNode
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    getIndexWidth
 * Signature: (J)I
 */
JNIEXPORT jint JNICALL Java_org_jetbrains_research_boolector_Native_getIndexWidth
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    dumpSmt2
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_org_jetbrains_research_boolector_Native_dumpSmt2
  (JNIEnv *, jclass);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    assume
 * Signature: (J)V
 */
JNIEXPORT void JNICALL Java_org_jetbrains_research_boolector_Native_assume
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    bitvecAssignment
 * Signature: (J)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_bitvecAssignment
  (JNIEnv *, jclass, jlong);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    matchNodeByName
 * Signature: (Ljava/lang/String;)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_matchNodeByName
  (JNIEnv *, jclass, jstring);

/*
 * Class:     org_jetbrains_research_boolector_Native
 * Method:    ugt
 * Signature: (JJ)J
 */
JNIEXPORT jlong JNICALL Java_org_jetbrains_research_boolector_Native_ugt
  (JNIEnv *, jclass, jlong, jlong);

#ifdef __cplusplus
}
#endif
#endif