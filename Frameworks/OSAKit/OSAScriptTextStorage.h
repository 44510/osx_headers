//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <OSAKit/OSATextStorage.h>

@class OSAScriptController;

@interface OSAScriptTextStorage : OSATextStorage
{
    OSAScriptController *_controller;
}

- (void)replaceCharactersInRange:(struct _NSRange)arg1 withString:(id)arg2;
- (void)replaceCharactersInRange:(struct _NSRange)arg1 withAttributedString:(id)arg2;
- (id)undoManager;
- (void)setController:(id)arg1;
- (id)controller;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

