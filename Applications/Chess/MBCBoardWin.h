//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "GKAchievementViewControllerDelegate.h"
#import "GKTurnBasedMatchmakerViewControllerDelegate.h"
#import "NSWindowDelegate.h"

@class GKAchievementViewController, GKDialogController, MBCAnimation, MBCBoard, MBCBoardView, MBCEngine, MBCGameInfo, MBCInteractivePlayer, MBCRemotePlayer, NSBox, NSDictionary, NSLayoutConstraint, NSMutableArray, NSPanel, NSSpeechSynthesizer, NSString, NSView;

@interface MBCBoardWin : NSWindowController <NSWindowDelegate, GKAchievementViewControllerDelegate, GKTurnBasedMatchmakerViewControllerDelegate>
{
    NSMutableArray *fObservers;
    GKAchievementViewController *fAchievements;
    MBCAnimation *fCurAnimation;
    MBCBoardView *gameView;
    NSPanel *gameNewSheet;
    NSBox *logContainer;
    NSView *logView;
    MBCBoard *board;
    MBCEngine *engine;
    MBCInteractivePlayer *interactive;
    MBCGameInfo *gameInfo;
    MBCRemotePlayer *remote;
    NSLayoutConstraint *logViewRightEdgeConstraint;
    GKDialogController *dialogController;
    NSSpeechSynthesizer *primarySynth;
    NSSpeechSynthesizer *alternateSynth;
    NSDictionary *primaryLocalization;
    NSDictionary *alternateLocalization;
}

+ (id)keyPathsForValuesAffectingEngineStrength;
@property(nonatomic) GKDialogController *dialogController; // @synthesize dialogController;
@property(nonatomic) NSLayoutConstraint *logViewRightEdgeConstraint; // @synthesize logViewRightEdgeConstraint;
@property(nonatomic) MBCRemotePlayer *remote; // @synthesize remote;
@property(nonatomic) MBCGameInfo *gameInfo; // @synthesize gameInfo;
@property(nonatomic) MBCInteractivePlayer *interactive; // @synthesize interactive;
@property(nonatomic) MBCEngine *engine; // @synthesize engine;
@property(nonatomic) MBCBoard *board; // @synthesize board;
@property(nonatomic) NSView *logView; // @synthesize logView;
@property(nonatomic) NSBox *logContainer; // @synthesize logContainer;
@property(nonatomic) NSPanel *gameNewSheet; // @synthesize gameNewSheet;
@property(nonatomic) MBCBoardView *gameView; // @synthesize gameView;
- (void)achievementViewControllerDidFinish:(id)arg1;
- (void)showAchievements:(id)arg1;
- (void)turnBasedMatchmakerViewController:(id)arg1 playerQuitForMatch:(id)arg2;
- (void)turnBasedMatchmakerViewController:(id)arg1 didFindMatch:(id)arg2;
- (void)turnBasedMatchmakerViewController:(id)arg1 didFailWithError:(id)arg2;
- (void)turnBasedMatchmakerViewControllerWasCancelled:(id)arg1;
- (void)profileDraw:(id)arg1;
- (void)setAngle:(float)arg1 spin:(float)arg2;
- (void)showPreferences:(id)arg1;
- (id)engineStrength;
- (int)searchTime;
- (id)engineStrengthForTime:(int)arg1;
@property(readonly, nonatomic) NSDictionary *alternateLocalization; // @synthesize alternateLocalization;
@property(readonly, nonatomic) NSDictionary *primaryLocalization; // @synthesize primaryLocalization;
- (id)copyLocalizationForKey:(id)arg1;
@property(readonly, nonatomic) NSSpeechSynthesizer *alternateSynth; // @synthesize alternateSynth;
@property(readonly, nonatomic) NSSpeechSynthesizer *primarySynth; // @synthesize primarySynth;
- (id)copySpeechSynthesizerForKey:(id)arg1;
- (id)voiceIDForKey:(id)arg1;
- (BOOL)hideRemoteProperties;
- (BOOL)hideEngineProperties;
- (BOOL)hideSpeakHumanMoves;
- (BOOL)hideSpeakMoves;
- (BOOL)hideNewGameSides;
- (BOOL)hideEngineStrength;
- (void)updatePlayers:(id)arg1;
- (id)speakOpponentTitle;
- (BOOL)speakHumanMoves;
- (BOOL)speakMoves;
- (BOOL)listenForMoves;
- (void)commitMove:(id)arg1;
- (void)executeMove:(id)arg1;
- (void)updateAchievementsForMove:(id)arg1;
- (void)gameEnded:(id)arg1;
- (void)adjustLogView;
- (void)toggleLogView:(id)arg1;
- (void)hideLogContainer:(id)arg1;
- (void)showLastMove:(id)arg1;
- (void)showHint:(id)arg1;
- (void)resign:(id)arg1;
- (void)cancelNewGame:(id)arg1;
- (void)startNewGame:(id)arg1;
- (void)runMatchmakerPanel;
- (void)showNewGameSheet;
- (void)handleRemoteResponse:(id)arg1;
- (void)requestDraw;
- (void)requestTakeback;
- (void)endAlertSheet:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (void)takeback:(id)arg1;
- (id)windowTitleForDocumentDisplayName:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)windowDidResignMain:(id)arg1;
- (void)windowDidBecomeMain:(id)arg1;
- (void)windowDidLoad;
- (void)endAnimation;
- (void)dealloc;
- (void)removeChessObservers;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

