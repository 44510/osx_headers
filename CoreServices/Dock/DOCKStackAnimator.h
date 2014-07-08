//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DOCKStack;

@interface DOCKStackAnimator : NSObject
{
    DOCKStack *_stack;
    unsigned char _maxCollapsedItems;
    unsigned char _state;
}

@property(readonly, nonatomic) __weak DOCKStack *stack; // @synthesize stack=_stack;
- (void).cxx_destruct;
- (void)collapse:(id)arg1;
- (void)expand:(id)arg1;
- (id)initWithStack:(id)arg1 andMaxNumberOfCollapsedItems:(unsigned char)arg2;

@end

