//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ABCardViewPropertyProvider;

__attribute__((visibility("hidden")))
@interface ABRemovesEmptyCardViewData : NSObject
{
    ABCardViewPropertyProvider *_propertyProvider;
}

- (id)_removeEmptyItemsFromMultiValue:(id)arg1 key:(id)arg2 itemsRemoved:(char *)arg3;
- (void)removeEmptyItemsFromDataSource:(id)arg1;

@end

