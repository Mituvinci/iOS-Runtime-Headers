/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@class <NSURLAuthenticationChallengeSender>, NSString;

@interface ISStoreAuthenticationChallenge : ISAuthenticationChallenge  {
    int _failureCount;
    BOOL _hasPassword;
    NSString *_password;
    <NSURLAuthenticationChallengeSender> *_sender;
    NSString *_user;
    BOOL _userNameIsEditable;
}

@property int failureCount;
@property BOOL hasPassword;
@property(retain) NSString * password;
@property <NSURLAuthenticationChallengeSender> * sender;
@property(retain) NSString * user;
@property BOOL userNameIsEditable;


- (void)setPassword:(id)arg1;
- (void)setUser:(id)arg1;
- (BOOL)hasPassword;
- (void)setSender:(id)arg1;
- (id)user;
- (id)password;
- (id)sender;
- (void)setHasPassword:(BOOL)arg1;
- (void)setFailureCount:(int)arg1;
- (void)setUserNameIsEditable:(BOOL)arg1;
- (BOOL)userNameIsEmail;
- (BOOL)userNameIsEditable;
- (int)failureCount;
- (id)init;
- (void)dealloc;

@end