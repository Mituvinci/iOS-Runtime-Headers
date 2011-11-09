/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class ISOpenURLRequest;

@interface ISOpenURLOperation : ISOperation  {
    ISOpenURLRequest *_request;
}

@property(readonly) ISOpenURLRequest * openURLRequest;


- (void)run;
- (id)openURLRequest;
- (id)_newSortedTargetsArray;
- (BOOL)_openURL:(id)arg1;
- (id)init;
- (void)dealloc;
- (id)initWithOpenURLRequest:(id)arg1;

@end