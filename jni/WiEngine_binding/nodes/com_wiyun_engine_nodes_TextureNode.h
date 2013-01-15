/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_nodes_TextureNode */

#ifndef _Included_com_wiyun_engine_nodes_TextureNode
#define _Included_com_wiyun_engine_nodes_TextureNode
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativeInit
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativeInit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativeGetTexture
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativeGetTexture
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setTexture
 * Signature: (Lcom/wiyun/engine/opengl/Texture2D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setTexture
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    getBlendFuncSrc
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_TextureNode_getBlendFuncSrc
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    getBlendFuncDst
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_TextureNode_getBlendFuncDst
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setBlendFunc
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setBlendFunc
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    getAlpha
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_TextureNode_getAlpha
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setAlpha
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setAlpha
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativeGetColor
 * Signature: (Lcom/wiyun/engine/types/WYColor3B;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativeGetColor
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativeSetColor
 * Signature: (III)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativeSetColor
  (JNIEnv *, jobject, jint, jint, jint);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isFlipX
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isFlipX
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setFlipX
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setFlipX
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isFlipY
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isFlipY
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setFlipY
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setFlipY
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isDither
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isDither
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setDither
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setDither
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setDisplayFrame
 * Signature: (Lcom/wiyun/engine/nodes/Frame;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setDisplayFrame__Lcom_wiyun_engine_nodes_Frame_2
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setDisplayFrame
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setDisplayFrame__II
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isFrameDisplayed
 * Signature: (Lcom/wiyun/engine/nodes/Frame;)Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isFrameDisplayed
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativeGetDisplayFrame
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativeGetDisplayFrame
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    addAnimation
 * Signature: (Lcom/wiyun/engine/nodes/Animation;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_addAnimation
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativeGetAnimationById
 * Signature: (I)I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativeGetAnimationById
  (JNIEnv *, jobject, jint);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isBlend
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isBlend
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setBlend
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setBlend
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setTextureRect
 * Signature: (Lcom/wiyun/engine/types/WYRect;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setTextureRect
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativegetTextureRect
 * Signature: (Lcom/wiyun/engine/types/WYRect;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativegetTextureRect
  (JNIEnv *, jobject, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setRotatedZwoptex
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setRotatedZwoptex
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isRotatedZwoptex
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isRotatedZwoptex
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setAutoFit
 * Signature: (Z)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setAutoFit
  (JNIEnv *, jobject, jboolean);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    isAutoFit
 * Signature: ()Z
 */
JNIEXPORT jboolean JNICALL Java_com_wiyun_engine_nodes_TextureNode_isAutoFit
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    nativeMakeFrame
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_com_wiyun_engine_nodes_TextureNode_nativeMakeFrame
  (JNIEnv *, jobject);

/*
 * Class:     com_wiyun_engine_nodes_TextureNode
 * Method:    setAlphaFunc
 * Signature: (IF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_nodes_TextureNode_setAlphaFunc
  (JNIEnv *, jobject, jint, jfloat);

#ifdef __cplusplus
}
#endif
#endif