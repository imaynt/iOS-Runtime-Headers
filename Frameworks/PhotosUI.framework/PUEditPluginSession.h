/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUEditPluginSession : NSObject <PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate, UIActivityGroupViewControllerDelegate, UINavigationControllerDelegate> {
    UIViewController * __hostViewController;
    int  _adjustmentType;
    <PUEditableAsset> * _asset;
    PUEditPlugin * _currentPlugin;
    <PUEditPluginSessionDataSource> * _dataSource;
    <PUEditPluginSessionDelegate> * _delegate;
    BOOL  _isAvailable;
    PUEditPluginManager * _pluginManager;
    UINavigationController * _pluginNavigationController;
}

@property (setter=_setHostViewController:, nonatomic) UIViewController *_hostViewController;
@property (setter=_setAdjustmentType:, nonatomic) int adjustmentType;
@property (setter=_setAsset:, nonatomic, retain) <PUEditableAsset> *asset;
@property (setter=_setCurrentPlugin:, nonatomic, retain) PUEditPlugin *currentPlugin;
@property (nonatomic) <PUEditPluginSessionDataSource> *dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PUEditPluginSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (setter=_setIsAvailable:, nonatomic) BOOL isAvailable;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3;
- (id)_hostViewController;
- (void)_launchPlugin:(id)arg1 afterDismissingViewController:(id)arg2;
- (id)_localizedEditorListTitle;
- (void)_pluginManagerPluginsDidChange:(id)arg1;
- (void)_setAdjustmentType:(int)arg1;
- (void)_setAsset:(id)arg1;
- (void)_setCurrentPlugin:(id)arg1;
- (void)_setHostViewController:(id)arg1;
- (void)_setIsAvailable:(BOOL)arg1;
- (void)_updateAvailability;
- (void)activityGroupViewController:(id)arg1 didSelectActivity:(id)arg2;
- (int)adjustmentType;
- (id)asset;
- (void)beginSessionWithAsset:(id)arg1 fromViewController:(id)arg2 sourceElement:(id)arg3;
- (id)currentPlugin;
- (id)dataSource;
- (void)dealloc;
- (id)delegate;
- (void)dismissSession;
- (void)editPluginHostViewController:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(id /* block */)arg3;
- (void)editPluginHostViewController:(id)arg1 didFinishWithCompletionType:(unsigned int)arg2;
- (void)editPluginHostViewController:(id)arg1 loadItemProviderWithHandler:(id /* block */)arg2;
- (id)init;
- (BOOL)isAvailable;
- (void)loadItemProviderWithSupportedAdjustmentData:(id)arg1 loadHandler:(id /* block */)arg2;
- (id)navigationController:(id)arg1 animationControllerForOperation:(int)arg2 fromViewController:(id)arg3 toViewController:(id)arg4;
- (unsigned int)pluginManagerMediaType;
- (void)presentAlertController:(id)arg1;
- (void)setDataSource:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)shouldLaunchPlugin:(id)arg1 completion:(id /* block */)arg2;
- (void)updatePluginManager;

@end
