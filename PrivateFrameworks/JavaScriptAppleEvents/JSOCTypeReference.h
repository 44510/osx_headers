//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <JavaScriptAppleEvents/JSOCTypePointer.h>

@class JSOCType;

@interface JSOCTypeReference : JSOCTypePointer
{
    JSOCType *_referencedType;
}

- (void).cxx_destruct;
- (id)deref;
- (const char *)objCType;
- (id)initWithReferencedType:(id)arg1;

@end

