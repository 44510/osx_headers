//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NSObject (NSAccessibilityInternal)
- (id)_accessibilityArrayAttributeValues:(id)arg1 index:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 clientError:(int *)arg4;
- (unsigned long long)_accessibilityArrayAttributeCount:(id)arg1 clientError:(int *)arg2;
- (unsigned long long)_accessibilityIndexOfChild:(id)arg1 clientError:(int *)arg2;
- (BOOL)_accessibilityCanSetValueForAttribute:(id)arg1 clientError:(int *)arg2;
- (id)_accessibilityValueForAttribute:(id)arg1 clientError:(int *)arg2;
- (id)_accessibilityAttributeNamesClientError:(int *)arg1;
@end

