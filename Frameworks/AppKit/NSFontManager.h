//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSFont, NSFontPanel;

@interface NSFontManager : NSObject
{
    NSFontPanel *_panel;
    unsigned int _fmReserved1;
    SEL _action;
    id _actionOrigin;
    id _target;
    NSFont *_selFont;
    struct _fmFlags {
        unsigned int multipleFont:1;
        unsigned int disabled:1;
        unsigned int senderTagMode:2;
        unsigned int _RESERVED:12;
    } _fmFlags;
    unsigned short _fmReserved3;
    id _delegate;
    id _collections;
    id _hiddenCollections;
    unsigned long long _fmReserved4;
}

+ (void)setFontManagerFactory:(Class)arg1;
+ (void)setFontPanelFactory:(Class)arg1;
+ (id)sharedFontManager;
+ (void)initialize;
- (id)_collectionWithName:(id)arg1;
- (id)_createFontPanelRepFromCollection:(id)arg1 removingHidden:(BOOL)arg2;
- (long long)_renameCollection:(id)arg1 to:(id)arg2;
- (void)_collection:(id)arg1 setHidden:(BOOL)arg2 save:(BOOL)arg3;
- (void)_removeFontDescriptor:(id)arg1 fromCollection:(id)arg2 save:(BOOL)arg3;
- (void)_replaceFontDescriptor:(id)arg1 withDescriptor:(id)arg2 inCollection:(id)arg3;
- (void)_addCollection:(id)arg1 options:(long long)arg2 sender:(id)arg3;
- (void)_openOldFavorites;
- (void)_openOldCollections;
- (void)_addDescriptorCheckingForDuplicates:(id)arg1 toCollection:(id)arg2;
- (id)_fontSetWithName:(id)arg1;
- (void)_openRegularCollections;
- (id)_availableFontSetNames;
- (id)_collectionWithName:(id)arg1 index:(long long *)arg2;
- (void)_sortCollections;
- (id)_openCollections;
- (id)_oldFontSetNames;
- (id)_oldFontSetWithName:(id)arg1;
- (id)_collections;
- (void)saveFontCollection:(id)arg1;
- (void)saveFontCollection:(id)arg1 withName:(id)arg2;
- (id)_nameForCollection:(id)arg1;
- (id)_filenameForCollection:(id)arg1;
- (void)noteFontCollectionsChanged;
- (id)_descStringForFont:(id)arg1;
- (id)_displayName:(id)arg1;
- (id)_fontFromDescriptor:(id)arg1;
- (id)_createDefaultCollectionRep;
- (void)noteFontFavoritesChanged;
- (BOOL)_isInternalFontName:(id)arg1;
- (id)_defaultFontSet;
- (long long)_reloadFontInfoIfNecessary:(id)arg1;
- (void)_loadFontFiles;
- (id)availableFontNamesMatchingFontDescriptor:(id)arg1;
- (void)orderFrontFontOptionsPanel:(id)arg1;
- (id)modifyFontTrait:(id)arg1;
- (id)_menu;
- (id)_faceForFamily:(id)arg1 fontName:(id)arg2;
- (id)_fontNameForFamily:(id)arg1 face:(id)arg2;
- (void)_renameFontDescriptorWithName:(id)arg1 to:(id)arg2 in:(id)arg3;
- (_Bool)_setFilteringSearchString:(id)arg1;
- (id)_fontDescriptorsForFamily:(id)arg1 inCollection:(id)arg2;
- (id)_familyNamesForCollection:(id)arg1;
- (id)_availableFontFamiliesForCollectionName:(id)arg1;
- (void)_releaseFamilyCache;
- (void)_setFamilyCache:(id)arg1 forCollectionName:(id)arg2;
- (id)_familyCacheForCollectionName:(id)arg1;
- (_Bool)_renameCollectionWithName:(id)arg1 to:(id)arg2;
- (void)_collection:(id)arg1 setHidden:(BOOL)arg2;
- (id)displayNameForCollectionWithName:(id)arg1;
- (void)removeFontDescriptors:(id)arg1 fromCollection:(id)arg2;
- (void)removeFontDescriptor:(id)arg1 fromCollection:(id)arg2;
- (void)addFontDescriptors:(id)arg1 toCollection:(id)arg2;
- (BOOL)removeCollection:(id)arg1;
- (BOOL)addCollection:(id)arg1 options:(unsigned long long)arg2;
- (id)fontDescriptorsInCollection:(id)arg1;
@property(readonly, copy) NSArray *collectionNames;
- (void)_notifyObserversWithUserInfo:(id)arg1;
- (id)convertFont:(id)arg1 toApproximateTraits:(unsigned long long)arg2;
- (void)orderFrontStylesPanel:(id)arg1;
- (void)orderFrontFontPanel:(id)arg1;
- (void)toggleFontPanelShown:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (BOOL)worksWhenModal;
- (void)modifyFontViaPanel:(id)arg1;
- (void)modifyFont:(id)arg1;
- (void)removeFontTrait:(id)arg1;
- (void)addFontTrait:(id)arg1;
- (id)convertWeight:(BOOL)arg1 ofFont:(id)arg2;
- (id)convertFont:(id)arg1 toNotHaveTrait:(unsigned long long)arg2;
- (id)convertFont:(id)arg1 toHaveTrait:(unsigned long long)arg2;
- (id)convertFont:(id)arg1 toFamily:(id)arg2;
- (id)convertFont:(id)arg1 toFace:(id)arg2;
- (id)convertFont:(id)arg1 toSize:(double)arg2;
- (id)fontWithFamily:(id)arg1 traits:(unsigned long long)arg2 weight:(long long)arg3 size:(double)arg4;
- (id)fontNameWithFamily:(id)arg1 traits:(unsigned long long)arg2 weight:(long long)arg3;
- (BOOL)fontNamed:(id)arg1 hasTraits:(unsigned long long)arg2;
- (id)localizedNameForFamily:(id)arg1 face:(id)arg2;
- (long long)weightOfFont:(id)arg1;
- (unsigned long long)traitsOfFont:(id)arg1;
- (id)availableFontNamesWithTraits:(unsigned long long)arg1;
- (id)availableMembersOfFontFamily:(id)arg1;
@property(readonly, copy) NSArray *availableFontFamilies;
@property(readonly, copy) NSArray *availableFonts;
- (void)_reactToFontSetChange;
- (unsigned long long)convertFontTraits:(unsigned long long)arg1;
@property(readonly) unsigned long long currentFontAction;
- (id)convertAttributes:(id)arg1;
- (id)convertFont:(id)arg1;
- (void)setSelectedAttributes:(id)arg1 isMultiple:(BOOL)arg2;
- (void)setSelectedFont:(id)arg1 isMultiple:(BOOL)arg2;
@property(readonly) NSFont *selectedFont;
@property(readonly, getter=isMultiple) BOOL multiple;
@property id delegate;
@property(readonly) BOOL sendAction;
@property __weak id target;
@property SEL action;
@property(getter=isEnabled) BOOL enabled;
- (id)fontPanel:(BOOL)arg1;
- (void)_setFontPanel:(id)arg1;
- (void)setFontMenu:(id)arg1;
- (id)fontMenu:(BOOL)arg1;
- (id)init;
- (oneway void)release;
- (id)_init;

@end

