/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@class PLImageTable;

@interface _PLDataPreheatItem : PLPreheatItem {
    PLImageTable *_imageTable;
    unsigned int _thumbIndex;
}

- (void)dealloc;
- (id)initWithThumbIndex:(unsigned int)arg1 imageTable:(id)arg2 format:(int)arg3 optimalSourcePixelSize:(struct CGSize { float x1; float x2; })arg4;
- (void)startPreheatRequestWithCompletionHandler:(id)arg1;

@end