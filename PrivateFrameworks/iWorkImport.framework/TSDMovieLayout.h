/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@class TSDInfoGeometry;

@interface TSDMovieLayout : TSDMediaLayout {
    TSDInfoGeometry *mDynamicInfoGeometry;
}

- (void)beginDynamicOperation;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })computeAlignmentFrameInRoot:(BOOL)arg1;
- (id)computeLayoutGeometry;
- (void)dealloc;
- (void)endDynamicOperation;
- (void)endResize;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullReflectionBoundsForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fullReflectionFrame;
- (id)i_computeWrapPath;
- (id)initWithInfo:(id)arg1;
- (id)layoutGeometryFromInfo;
- (id)movieInfo;
- (void)p_createDynamicCopies;
- (void)p_destroyDynamicCopies;
- (void)processChangedProperty:(int)arg1;
- (BOOL)supportsRotation;
- (void)takeRotationFromTracker:(id)arg1;
- (void)takeSizeFromTracker:(id)arg1;

@end