/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@interface _UICustomDiscreteFeedback : _UIDiscreteFeedback {
    unsigned int  _eventType;
    unsigned long  _systemSoundID;
}

@property (nonatomic, readonly) unsigned int eventType;
@property (nonatomic, readonly) unsigned long systemSoundID;

+ (id)customDiscreteFeedbackWithEventType:(unsigned int)arg1 systemSoundID:(unsigned long)arg2;
+ (id)type;

- (unsigned int)_effectiveEventType;
- (unsigned long)_effectiveSystemSoundID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)dictionaryRepresentation;
- (unsigned int)eventType;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long)systemSoundID;

@end