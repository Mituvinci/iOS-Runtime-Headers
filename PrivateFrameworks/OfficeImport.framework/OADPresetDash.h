/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface OADPresetDash : OADDash  {
    unsigned char mType;
    unsigned int mIsTypeOverridden : 1;
}

+ (id)defaultProperties;

- (id)equivalentCustomDash;
- (BOOL)isTypeOverridden;
- (id)initWithDefaults;
- (int)type;
- (void)setType:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned int)hash;
- (id)copyWithZone:(struct _NSZone { }*)arg1;

@end