/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/MPUFoundation.framework/MPUFoundation
 */

@interface MPUModelCurator : MPUModelPerson {
    int _curatorKind;
    NSString *_editorNotes;
    NSString *_shortName;
}

@property (nonatomic) int curatorKind;
@property (nonatomic, copy) NSString *editorNotes;
@property (nonatomic, copy) NSString *shortName;

+ (id)__curatorKind__KEY;
+ (id)__editorNotes__KEY;
+ (id)__shortName__KEY;

- (void).cxx_destruct;
- (int)curatorKind;
- (id)editorNotes;
- (void)setCuratorKind:(int)arg1;
- (void)setEditorNotes:(id)arg1;
- (void)setShortName:(id)arg1;
- (id)shortName;

@end