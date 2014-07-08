//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "ABCardCollectionViewDataSource.h"
#import "ABCardCollectionViewDelegate.h"

@class ABCardCollectionView, ABCardViewLabelGenerator, ABCardViewPropertyProvider, ABCardViewStyleProvider, ABCollectionViewItemFactory, NSString;

__attribute__((visibility("hidden")))
@interface ABCardCollectionViewController : NSObject <ABCardCollectionViewDataSource, ABCardCollectionViewDelegate>
{
    ABCardCollectionView *_view;
    ABCollectionViewItemFactory *_itemFactory;
    ABCardViewStyleProvider *_styleProvider;
    id <ABCardViewDataSource> _dataSource;
    BOOL _provideEmptyItems;
    BOOL _isImporting;
    ABCardViewLabelGenerator *_labelGenerator;
    ABCardViewPropertyProvider *_propertyProvider;
}

@property(retain, nonatomic) ABCardViewStyleProvider *styleProvider; // @synthesize styleProvider=_styleProvider;
@property(retain, nonatomic) ABCollectionViewItemFactory *itemFactory; // @synthesize itemFactory=_itemFactory;
@property(retain, nonatomic) ABCardViewPropertyProvider *propertyProvider; // @synthesize propertyProvider=_propertyProvider;
@property(retain, nonatomic) ABCardViewLabelGenerator *labelGenerator; // @synthesize labelGenerator=_labelGenerator;
@property(retain, nonatomic) ABCardCollectionView *view; // @synthesize view=_view;
- (id)item:(id)arg1 titleForAction:(id)arg2;
- (BOOL)item:(id)arg1 shouldEnableAction:(id)arg2;
- (void)item:(id)arg1 executeAction:(id)arg2;
- (void)updateViewsOfItemsOfKey:(id)arg1;
- (void)updateItemsOfKey:(id)arg1 withNewMultiValue:(id)arg2 forIndexRemoved:(unsigned long long)arg3;
- (void)updateItemsOfKey:(id)arg1 withNewMultiValue:(id)arg2;
- (void)validateSiblingsOfItem:(id)arg1;
- (BOOL)isEditing;
- (void)itemDidRequestNewItem:(id)arg1;
- (void)itemWasRemoved:(id)arg1;
- (void)itemDidEndEditing:(id)arg1;
- (void)itemValueDidBecomeEmpty:(id)arg1;
- (void)itemValueDidBecomeNonEmpty:(id)arg1;
- (id)collectionItemsForKey:(id)arg1;
- (id)preferredNameCollectionItem;
- (id)emptyCollectionItemForKey:(id)arg1;
- (id)collectionItems;
- (BOOL)isMe;
- (id)emptyItemForMultiValue:(id)arg1 key:(id)arg2;
- (id)addEmptyEntriesToMultiValue:(id)arg1;
- (id)addEmptyEntryToMultiValue:(id)arg1;
@property(retain, nonatomic) id <ABCardViewDataSource> dataSource;
- (void)setImporting:(BOOL)arg1;
- (void)dealloc;
- (id)initWithView:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

