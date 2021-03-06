/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@interface CKFullScreenBalloonViewControllerPhone : CKFullScreenBalloonViewController <CKActionSheetMenuViewDelegate, CKBalloonViewDelegate, CKStickerDetailViewControllerDelegate> {
    BOOL  _animationsDisabledForTesting;
    UIView * _balloonView;
    float  _balloonYOffsetFromTranscript;
    CKImpactEffectHapticsGenerator * _hapticsGenerator;
    NSArray * _interfaceActions;
    CKActionSheetMenuView * _menuView;
    BOOL  _shouldLayoutViews;
    CKGroupAcknowledgmentVotingViewController * _votingViewController;
}

@property (nonatomic) BOOL animationsDisabledForTesting;
@property (nonatomic, retain) UIView *balloonView;
@property (nonatomic) float balloonYOffsetFromTranscript;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, retain) CKImpactEffectHapticsGenerator *hapticsGenerator;
@property (readonly) unsigned int hash;
@property (nonatomic, copy) NSArray *interfaceActions;
@property (nonatomic, retain) CKActionSheetMenuView *menuView;
@property (readonly) Class superclass;
@property (nonatomic, retain) CKGroupAcknowledgmentVotingViewController *votingViewController;

- (void).cxx_destruct;
- (BOOL)_shouldShowVotingView;
- (void)_stickerDetailViewControllerCloseButtonPressed:(id)arg1;
- (BOOL)animationsDisabledForTesting;
- (void)balloonEditMenuViewWasDismissed:(id)arg1;
- (id)balloonView;
- (void)balloonViewDoubleTapped:(id)arg1;
- (void)balloonViewLongTouched:(id)arg1;
- (void)balloonViewTapped:(id)arg1;
- (float)balloonYOffsetFromTranscript;
- (void)dealloc;
- (void)disableAnimationsForTesting;
- (void)dismissTapGestureRecognized:(id)arg1;
- (id)hapticsGenerator;
- (id)initWithChatItem:(id)arg1 title:(id)arg2 interfaceActions:(id)arg3 gradientReferenceView:(id)arg4 isGroupConversation:(BOOL)arg5 showActionMenu:(BOOL)arg6 pluginBalloonSnapshot:(id)arg7 delegate:(id)arg8;
- (void)interactionStartedFromPreviewItemControllerInBalloonView:(id)arg1;
- (void)interactionStoppedFromPreviewItemControllerInBalloonView:(id)arg1;
- (id)interfaceActions;
- (id)menuView;
- (void)performClosingAnimationsWithSendAnimation:(BOOL)arg1 withCompletion:(id /* block */)arg2;
- (void)performInitialAnimations;
- (void)presentStickerDetailControllerWithStickers:(id)arg1;
- (void)setAnimationsDisabledForTesting:(BOOL)arg1;
- (void)setBalloonView:(id)arg1;
- (void)setBalloonYOffsetFromTranscript:(float)arg1;
- (void)setHapticsGenerator:(id)arg1;
- (void)setInterfaceActions:(id)arg1;
- (void)setMenuView:(id)arg1;
- (void)setVotingViewController:(id)arg1;
- (void)stickerDetailViewController:(id)arg1 deletedStickerWithTransferGUID:(id)arg2;
- (void)stickerDetailViewController:(id)arg1 selectedStickerPackWithAdamID:(id)arg2;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (id)votingViewController;

@end
