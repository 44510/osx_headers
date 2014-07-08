//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSMutableArray;

@interface NSBinder : NSObject <NSCoding>
{
    id _object;
    NSMutableArray *_bindingInfos;
    struct __binderFlags {
        unsigned int _isConnected:1;
        unsigned int _hasPerformedObservationRegistration:1;
        unsigned int _isObserving:1;
        unsigned int _suspendObservationProcessing:1;
        unsigned int _needsRefreshWhenObserverationProcessingResumes:1;
        unsigned int _reservedBinder:27;
    } _binderFlags;
    unsigned long long _bindingsBoundMask;
    id _plugin;
    id _expectedObservingInfo;
}

+ (BOOL)_autoCreateBinderForObject:(id)arg1 withController:(id)arg2;
+ (id)_deprecatedBindings;
+ (id)binderClassesSuperseded;
+ (id)bindingCategory;
+ (id)objectMechanismsRequiredForObject:(id)arg1;
+ (id)bindingsForObject:(id)arg1;
+ (id)_enumeratedBindings:(id)arg1 storage:(id *)arg2 number:(unsigned long long)arg3 numberFirstBinding:(BOOL)arg4 maxNumber:(unsigned long long)arg5;
+ (BOOL)isUsableWithObject:(id)arg1;
+ (Class)_pluginClassWithObject:(id)arg1;
+ (id)_pluginProtocol;
+ (id)binderClassesForObject:(id)arg1;
+ (struct __CFArray *)_allBinderClasses;
+ (void)_didPresentModalAlert:(BOOL)arg1 contextInfo:(CDStruct_b2dc443c *)arg2;
+ (void)_presentSheetForError:(id)arg1 responder:(id)arg2 responderCandidate:(id)arg3 delegate:(id)arg4 callback:(SEL)arg5 callbackContextInfo:(void *)arg6;
+ (void)_presentAlertPanelForError:(id)arg1 responder:(id)arg2 responderCandidate:(id)arg3;
+ (id)_prepareAlertError:(id)arg1 responder:(id *)arg2 responderCandidate:(id)arg3 window:(id *)arg4 recoveryAttempter:(id)arg5;
+ (void)load;
- (void)_markAutoCreated:(BOOL)arg1;
- (BOOL)_isAutoCreated;
- (id)description;
- (void)_logError:(id)arg1 fallbackMessage:(id)arg2 relatedToBinding:(id)arg3;
- (void)_presentModalAlertWithError:(id)arg1 responder:(id)arg2 relatedToBinding:(id)arg3;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 context:(void *)arg3;
- (BOOL)isEditing;
- (BOOL)commitEditingAndReturnError:(id *)arg1;
- (void)commitEditingWithDelegate:(id)arg1 didCommitSelector:(SEL)arg2 contextInfo:(void *)arg3;
- (BOOL)commitEditing;
- (void)discardEditing;
- (BOOL)invokeSelector:(SEL)arg1 withArguments:(id)arg2 forBinding:(id)arg3 atIndex:(unsigned long long)arg4 error:(id *)arg5;
- (BOOL)setValue:(id *)arg1 forBinding:(id)arg2 atIndex:(unsigned long long)arg3 error:(id *)arg4;
- (id)mutableSetValueForBinding:(id)arg1 atIndex:(unsigned long long)arg2 resolveMarkersToPlaceholders:(BOOL)arg3;
- (id)mutableArrayValueForBinding:(id)arg1 atIndex:(unsigned long long)arg2 resolveMarkersToPlaceholders:(BOOL)arg3;
- (id)valueForBinding:(id)arg1 atIndex:(unsigned long long)arg2 resolveMarkersToPlaceholders:(BOOL)arg3;
- (id)valueForBinding:(id)arg1 atIndexPath:(id)arg2 resolveMarkersToPlaceholders:(BOOL)arg3;
- (BOOL)setValue:(id *)arg1 forBinding:(id)arg2 atIndexPath:(id)arg3 error:(id *)arg4;
- (BOOL)invokeSelector:(SEL)arg1 withArguments:(id)arg2 forBinding:(id)arg3 atIndexPath:(id)arg4 error:(id *)arg5;
- (BOOL)invokeSelector:(SEL)arg1 withArguments:(id)arg2 forBinding:(id)arg3 error:(id *)arg4;
- (BOOL)setValue:(id *)arg1 forBinding:(id)arg2 error:(id *)arg3;
- (id)mutableSetValueForBinding:(id)arg1 resolveMarkersToPlaceholders:(BOOL)arg2;
- (id)mutableArrayValueForBinding:(id)arg1 resolveMarkersToPlaceholders:(BOOL)arg2;
- (id)valueForBinding:(id)arg1 resolveMarkersToPlaceholders:(BOOL)arg2;
- (id)resolveMarkerToPlaceholder:(id)arg1 binding:(id)arg2;
- (id)applyValueTransformerToValue:(id)arg1 forBinding:(id)arg2 reverse:(BOOL)arg3;
- (void)_invokeSelector:(SEL)arg1 withArguments:(id)arg2 onKeyPath:(id)arg3 ofObject:(id)arg4 mode:(struct __NSKeyValueCodingControllerModeType)arg5 raisesForNotApplicableKeys:(BOOL)arg6;
- (BOOL)_setValue:(id *)arg1 forKeyPath:(id)arg2 ofObject:(id)arg3 mode:(struct __NSKeyValueCodingControllerModeType)arg4 validateImmediately:(BOOL)arg5 raisesForNotApplicableKeys:(BOOL)arg6 error:(id *)arg7;
- (id)_mutableSetValueForKeyPath:(id)arg1 ofObject:(id)arg2 atIndex:(unsigned long long)arg3 raisesForNotApplicableKeys:(BOOL)arg4;
- (id)_mutableArrayValueForKeyPath:(id)arg1 ofObject:(id)arg2 atIndex:(unsigned long long)arg3 raisesForNotApplicableKeys:(BOOL)arg4;
- (id)_valueForKeyPath:(id)arg1 ofObject:(id)arg2 mode:(struct __NSKeyValueCodingControllerModeType)arg3 raisesForNotApplicableKeys:(BOOL)arg4;
- (id)_resolveMarkerToPlaceholder:(id)arg1 forBindingInfo:(id)arg2 allowPluginOverride:(BOOL)arg3;
- (id)_applyValueTransformerToValue:(id)arg1 forBindingInfo:(id)arg2 reverse:(BOOL)arg3;
- (void)_prepareIndirectKeyValueCodingCallWithPartialControllerKey:(id)arg1 controller:(id)arg2;
- (BOOL)isConnected;
- (oneway void)releaseConnectionWithSynchronizePeerBinders:(BOOL)arg1;
- (void)breakConnection;
- (void)_cleanUpConnectionWithSynchronizePeerBinders:(BOOL)arg1;
- (void)_connectionWasBroken;
- (void)establishConnection;
- (BOOL)_handleObservingRefresh;
- (void)_connectionWasEstablished;
- (id)deprecatedBindings;
- (void)_performConnectionEstablishedRefresh;
- (BOOL)_observationProcessingEnabled;
- (BOOL)shouldProcessObservations;
- (void)_resumeObservationNotificationProcessing;
- (void)_suspendObservationNotificationProcessing;
- (void)_updateDependenciesWithPeerBinders:(id)arg1;
- (void)_synchronizeWithPeerBindersInArray:(id)arg1;
- (void)_clearDependenciesWithAllPeerBinders;
- (id)_referenceBinderController;
- (id)_referenceBinding;
- (void)_updateObservingRegistration:(BOOL)arg1;
- (BOOL)_observeKeyPathForBindingInfo:(id)arg1 registerOrUnregister:(BOOL)arg2;
- (BOOL)_observeKeyPathForRelatedBinder:(id)arg1 registerOrUnregister:(BOOL)arg2;
- (BOOL)_isKeyPathBound:(id)arg1;
- (BOOL)_isAnyBindingInMaskBound:(unsigned long long)arg1;
- (BOOL)_isBindingEstablished:(id)arg1;
- (BOOL)alwaysPresentsApplicationModalAlertsWithBinding:(id)arg1;
- (void)setAlwaysPresentsApplicationModalAlerts:(BOOL)arg1 withBinding:(id)arg2;
- (BOOL)validatesImmediatelyWithBinding:(id)arg1;
- (void)setValidatesImmediately:(BOOL)arg1 withBinding:(id)arg2;
- (BOOL)raisesForNotApplicableKeysWithBinding:(id)arg1;
- (void)setRaisesForNotApplicableKeys:(BOOL)arg1 withBinding:(id)arg2;
- (id)placeholderForMarker:(id)arg1 withBinding:(id)arg2;
- (void)setPlaceholder:(id)arg1 forMarker:(id)arg2 withBinding:(id)arg3;
- (void)_setController:(id)arg1 forBinding:(id)arg2;
- (id)_valueTransformerNameForBinding:(id)arg1;
- (id)valueTransformerForBinding:(id)arg1;
- (id)keyPathForBinding:(id)arg1;
- (id)controllerForBinding:(id)arg1;
- (id)_bindingInfos;
- (void)removeBinding:(id)arg1;
- (void)_removeBinding:(id)arg1 byReplacingWithRemainingBindingsInArray:(id)arg2;
- (void)_removeBinding:(id)arg1;
- (id)_bindingInfoForBinding:(id)arg1;
- (unsigned long long)_bindingInfoIndexForBinding:(id)arg1;
- (void)addBinding:(id)arg1 toController:(id)arg2 withKeyPath:(id)arg3 valueTransformer:(id)arg4 options:(id)arg5;
- (void)_addBinding:(id)arg1 toController:(id)arg2 withKeyPath:(id)arg3 valueTransformerName:(id)arg4 options:(id)arg5;
- (BOOL)canApplyValueTransformer:(id)arg1 toBinding:(id)arg2;
- (BOOL)_isBooleanBinding:(id)arg1;
- (Class)valueClassForBinding:(id)arg1;
- (BOOL)isBindingKeyOptional:(id)arg1;
- (BOOL)isBindingKeyless:(id)arg1;
- (BOOL)bindingRunsAlerts:(id)arg1;
- (BOOL)isBindingReadOnly:(id)arg1;
- (BOOL)canAddBinding:(id)arg1 toController:(id)arg2;
- (id)_optionsForBinding:(id)arg1 specifyOnlyIfDifferentFromDefault:(BOOL)arg2;
- (void)_setOptions:(id)arg1 forBinding:(id)arg2;
- (void)_setOptions:(id)arg1 withBindingInfo:(id)arg2;
- (void)_setParameter:(id)arg1 forOption:(id)arg2 withBindingInfo:(id)arg3;
- (BOOL)_testBinderConfiguration:(id)arg1 repairBindings:(BOOL)arg2;
- (id)availableBindings;
- (id)_plugin;
- (unsigned long long)_bindingAdaptorMethodsNeededMask;
- (id)object;
- (void)_setObject:(id)arg1;
- (void)dealloc;
- (void)_dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)_updatePlaceholdersForBindingInfo:(id)arg1;
- (id)copyToObject:(id)arg1;
- (void)_copyDetailsFromBinder:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)_initWithObjectNoExceptions:(id)arg1;
- (void)_init;
- (void)_noticeEditablePeerBinder:(id)arg1;
- (void)updateOutlineColumnOutlineCell:(id)arg1 forDisplayAtIndexPath:(id)arg2;
- (void)updateOutlineColumnDataCell:(id)arg1 forDisplayAtIndexPath:(id)arg2;
- (BOOL)supportsTableEditing;
- (void)updateTableColumnDataCell:(id)arg1 forDisplayAtIndex:(unsigned long long)arg2;
- (void)_noticeTextColorPeerBinder:(id)arg1;

@end

