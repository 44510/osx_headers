//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AUModelProtocol.h"

@class AUBaseModel, AUDocument, AUSetupController, NSMutableDictionary, NSString;

@interface AUDataModel : NSObject <AUModelProtocol>
{
    id <AUModelDelegate> delegate;
    AUBaseModel *base;
    AUSetupController *setupController;
    AUDocument *document;
    NSMutableDictionary *propertyMap;
    NSMutableDictionary *flatSettingsDict;
    BOOL modelChanged;
    BOOL _dataLoaded;
    BOOL _ignoreModelChanged;
    BOOL _loadedOnceFlag;
}

@property(nonatomic) BOOL loadedOnceFlag; // @synthesize loadedOnceFlag=_loadedOnceFlag;
@property(nonatomic) BOOL dataLoaded; // @synthesize dataLoaded=_dataLoaded;
@property(nonatomic) BOOL modelChanged; // @synthesize modelChanged;
@property(retain, nonatomic) NSMutableDictionary *flatSettingsDict; // @synthesize flatSettingsDict;
@property(retain, nonatomic) NSMutableDictionary *propertyMap; // @synthesize propertyMap;
@property(retain, nonatomic) AUSetupController *setupController; // @synthesize setupController;
@property(nonatomic) AUDocument *document; // @synthesize document;
@property(nonatomic) AUBaseModel *base; // @synthesize base;
@property(nonatomic) id delegate; // @synthesize delegate;
- (void)loadDataForKeyPath:(id)arg1;
- (id)createError:(int)arg1 forSetting:(int)arg2;
- (id)errors;
- (BOOL)valid;
- (BOOL)saveData;
- (void)loadData;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)didChangeValueForKey:(id)arg1 withSetMutation:(unsigned long long)arg2 usingObjects:(id)arg3;
- (void)didChange:(unsigned long long)arg1 valuesAtIndexes:(id)arg2 forKey:(id)arg3;
- (void)didChangeValueForKey:(id)arg1;
- (BOOL)canUpdateModelChanged;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

