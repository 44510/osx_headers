//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface RDValueSelector : NSObject
{
    NSString *_selectorName;
    int _returnType;
    SEL _selector;
    CDUnknownFunctionPointerType _methodImp;
}

- (void).cxx_destruct;
- (id)valuesFromObjects:(id)arg1;
- (id)valueFromTarget:(id)arg1;
- (BOOL)setupForTarget:(id)arg1;
- (id)initWithSelectorName:(id)arg1;

@end

