//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@interface NSVB_ViewServiceXPCMachSendRight : NSObject <NSSecureCoding>
{
    unsigned int _sendRight;
}

+ (BOOL)supportsSecureCoding;
+ (id)wrapSendRight:(unsigned int)arg1;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (unsigned int)sendRight;
- (void)dealloc;

@end

