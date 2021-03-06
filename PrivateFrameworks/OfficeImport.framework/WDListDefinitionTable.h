/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface WDListDefinitionTable : NSObject {
    WDListDefinition * mDefaultListDefinition;
    WDDocument * mDocument;
    NSMutableDictionary * mListDefinitionMapById;
    NSMutableDictionary * mListDefinitionMapByStyleId;
    NSMutableArray * mListDefinitions;
    WDListDefinition * mNullListDefinition;
}

- (id)addDefinitionWithDefinitionId:(long)arg1 styleId:(id)arg2;
- (void)dealloc;
- (id)definitionWithDefinitionId:(long)arg1;
- (id)definitionWithStyleId:(id)arg1;
- (id)definitions;
- (id)description;
- (id)initWithDocument:(id)arg1;
- (id)resolvedDefinitionWithDefinitionId:(long)arg1;

@end
