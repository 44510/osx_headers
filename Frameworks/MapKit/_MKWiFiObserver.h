//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface _MKWiFiObserver : NSObject
{
    struct __SCDynamicStore *_airportDynamicStore;
    BOOL _wifiEnabled;
    id <_MKWiFiObserverDelegate> _delegate;
}

@property(nonatomic) __weak id <_MKWiFiObserverDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic, getter=isWifiEnabled) BOOL wifiEnabled; // @synthesize wifiEnabled=_wifiEnabled;
- (void).cxx_destruct;
- (void)_updateWiFiState:(BOOL)arg1;
- (id)init;

@end

