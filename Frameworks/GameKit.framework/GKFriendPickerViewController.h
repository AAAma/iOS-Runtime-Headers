/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class NSArray, GKGameInviteMessageViewController, GKSectionArrayDataSource, <GKFriendPickerViewControllerDelegate>, GKMatchmakerNavView, GKFriendPickerListSection, GKUITheme, NSString, NSMutableDictionary, GKTableHeaderSearchController;

@interface GKFriendPickerViewController : GKTableViewControllerV2 <GKGameInviteMessageViewControllerDelegate, UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate> {
    <GKFriendPickerViewControllerDelegate> *_delegate;
    int _maxPlayers;
    int _numSelected;
    GKUITheme *_theme;
    NSMutableDictionary *_ranks;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _formSheetInsets;
    GKGameInviteMessageViewController *_messageViewController;
    NSString *_inviteMessage;
    BOOL _loadingFriendsFailed;
    GKMatchmakerNavView *_navView;
    GKFriendPickerListSection *_friendListSection;
    GKSectionArrayDataSource *_friendPickerDataSource;
    GKTableHeaderSearchController *_searchController;
}

@property <GKFriendPickerViewControllerDelegate> * delegate;
@property int maxPlayers;
@property(retain) NSArray * pickableFriends;
@property(retain) NSMutableDictionary * ranks;
@property(retain) GKUITheme * theme;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } formSheetInsets;
@property BOOL loadingFriendsFailed;
@property(retain) NSString * inviteMessage;
@property(retain) GKFriendPickerListSection * friendListSection;
@property(retain) GKSectionArrayDataSource * friendPickerDataSource;
@property(retain) GKTableHeaderSearchController * searchController;
@property(retain) GKMatchmakerNavView * navView;
@property int numSelected;


- (void)dealloc;
- (id)inviteMessage;
- (void)didSelectPlayer:(id)arg1;
- (id)predicateForSearchText:(id)arg1;
- (void)gameInviteMessageViewController:(id)arg1 didFinishWithMessage:(id)arg2;
- (void)updateEnabledStateForVisibleCells;
- (id)contentsForItem:(id)arg1;
- (id)visibleTableView;
- (void)donePickingPlayersWithMessage:(id)arg1;
- (id)selectedPlayers;
- (int)numSelected;
- (void)setNumSelected:(int)arg1;
- (id)friendPickerDataSource;
- (id)pickableFriends;
- (void)setSearchController:(id)arg1;
- (void)setFriendPickerDataSource:(id)arg1;
- (id)friendListSection;
- (void)showMessageViewController;
- (void)setFriendListSection:(id)arg1;
- (void)_gkUpdateContentsWithCompletionHandlerAndError:(id)arg1;
- (id)ranks;
- (id)navView;
- (BOOL)loadingFriendsFailed;
- (void)setInviteMessage:(id)arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })formSheetInsets;
- (void)updateNavViewLayoutForOrientation:(int)arg1;
- (void)setRanks:(id)arg1;
- (void)setPickableFriends:(id)arg1;
- (void)setLoadingFriendsFailed:(BOOL)arg1;
- (void)selectFriends:(id)arg1;
- (id)initWithTheme:(id)arg1;
- (void)setFormSheetInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (void)setPlayerRangeText;
- (void)setNavView:(id)arg1;
- (id)theme;
- (void)setTheme:(id)arg1;
- (int)maxPlayers;
- (void)setMaxPlayers:(int)arg1;
- (id)searchController;
- (void)searchBar:(id)arg1 textDidChange:(id)arg2;
- (void)done;
- (void)willAnimateRotationToInterfaceOrientation:(int)arg1 duration:(double)arg2;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewDidUnload;
- (void)loadView;
- (BOOL)shouldAutorotateToInterfaceOrientation:(int)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;

@end