//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class Chat, ChatWindowController, NSWindow;

@interface ChatMiniwindowController : NSObject
{
    NSWindow *_window;
    Chat *_chat;
    ChatWindowController *_chatWindowController;
}

@property(nonatomic) ChatWindowController *chatWindowController; // @synthesize chatWindowController=_chatWindowController;
@property(retain, nonatomic) Chat *chat; // @synthesize chat=_chat;
@property NSWindow *window; // @synthesize window=_window;
- (void)_chatChanged:(id)arg1;
- (void)_needsDrawFromAnimate:(id)arg1;
- (void)windowDidDeminiaturize:(id)arg1;
- (void)windowDidMiniaturize:(id)arg1;
- (void)_updateMiniwindowImage;
- (void)updateSelectedChat;
- (void)updateUnreadCount;
- (void)dealloc;
- (id)initWithWindow:(id)arg1;

@end

