/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceMemos.framework/VoiceMemos
 */

@interface RCCompositionComposedAssetWriter : NSObject {
    BOOL  _canGenerateWaveform;
    BOOL  _canGenerateWaveformByProcessingAVURL;
    BOOL  _canSaveCompositionMetadata;
    RCComposition * _composition;
    AVAssetExportSession * _exportSession;
    RCWaveformDataSource * _waveformDataSource;
}

@property (nonatomic) BOOL canGenerateWaveform;
@property (nonatomic) BOOL canGenerateWaveformByProcessingAVURL;
@property (nonatomic) BOOL canSaveCompositionMetadata;
@property (nonatomic, readonly) RCComposition *composition;
@property (nonatomic, readonly) float progress;

- (void).cxx_destruct;
- (void)_writeCompositionWaveformForFinalizedAssetFromFragmentsWithCompletionHandler:(id /* block */)arg1;
- (void)_writeCompositionWaveformForFinalizedAssetWithCompletionHandler:(id /* block */)arg1;
- (void)_writeCompositionWithCompletionHandler:(id /* block */)arg1;
- (BOOL)canGenerateWaveform;
- (BOOL)canGenerateWaveformByProcessingAVURL;
- (BOOL)canSaveCompositionMetadata;
- (void)cancel;
- (id)composition;
- (id)initWithComposition:(id)arg1;
- (float)progress;
- (void)setCanGenerateWaveform:(BOOL)arg1;
- (void)setCanGenerateWaveformByProcessingAVURL:(BOOL)arg1;
- (void)setCanSaveCompositionMetadata:(BOOL)arg1;
- (void)writeCompositionWithCompletionBlock:(id /* block */)arg1;

@end
