/* Generated by RuntimeBrowser.
 */

@protocol CNTUCallProvider <NSObject>

@required

- (NSString *)bundleIdentifier;
- (<CNTUDialRequest> *)dialRequestForDestinationID:(NSString *)arg1 contact:(CNContact *)arg2 video:(BOOL)arg3;
- (NSString *)localizedName;
- (NSSet *)supportedHandleTypes;
- (BOOL)supportsAudio;
- (BOOL)supportsVideo;

@end