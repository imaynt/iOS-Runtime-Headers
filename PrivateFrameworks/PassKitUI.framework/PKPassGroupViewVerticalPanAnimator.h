/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
 */

@interface PKPassGroupViewVerticalPanAnimator : NSObject {
    UIPanGestureRecognizer * _gestureRecognizer;
    PKPassGroupView * _groupView;
    _UIDynamicValueAnimation * _panningAnimation;
    struct CGPoint { 
        float x; 
        float y; 
    }  _panningViewStartPosition;
    struct CGPoint { 
        float x; 
        float y; 
    }  _panningViewTargetPosition;
    float  _panningViewTargetScale;
    CASpringAnimation * _springAnimation;
    CAMediaTimingFunction * _timingFunction;
}

@property (nonatomic, retain) UIPanGestureRecognizer *gestureRecognizer;
@property (nonatomic, readonly, retain) PKPassGroupView *groupView;
@property (nonatomic) struct CGPoint { float x1; float x2; } panningViewStartPosition;
@property (nonatomic) struct CGPoint { float x1; float x2; } panningViewTargetPosition;
@property (nonatomic) float panningViewTargetScale;

- (void).cxx_destruct;
- (id)_dynamicAnimationWithStart:(float)arg1 target:(float)arg2 initialVelocity:(float)arg3;
- (void)dealloc;
- (void)dismissWithStartVelocity:(float)arg1 alongSideApplier:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)gestureRecognizer;
- (id)groupView;
- (id)init;
- (id)initWithGroupView:(id)arg1;
- (void)layoutViewsWithY:(float)arg1;
- (struct CGPoint { float x1; float x2; })panningViewStartPosition;
- (struct CGPoint { float x1; float x2; })panningViewTargetPosition;
- (float)panningViewTargetScale;
- (void)setGestureRecognizer:(id)arg1;
- (void)setPanningViewStartPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPanningViewTargetPosition:(struct CGPoint { float x1; float x2; })arg1;
- (void)setPanningViewTargetScale:(float)arg1;
- (void)stop;

@end
