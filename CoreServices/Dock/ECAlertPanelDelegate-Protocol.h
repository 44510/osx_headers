//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CALayer, ECAlertPanel;

@protocol ECAlertPanelDelegate <NSObject>

@optional
- (CALayer *)layerForCenteringOfAlertPanel:(ECAlertPanel *)arg1;
- (void)alertPanel:(ECAlertPanel *)arg1 didDismissWithButtonIndex:(long long)arg2;
- (void)alertPanel:(ECAlertPanel *)arg1 willDismissWithButtonIndex:(long long)arg2;
- (void)didPresentAlertPanel:(ECAlertPanel *)arg1;
- (void)willPresentAlertPanel:(ECAlertPanel *)arg1;
- (void)alertPanelCancel:(ECAlertPanel *)arg1;
- (void)alertPanel:(ECAlertPanel *)arg1 clickedButtonIndex:(long long)arg2;
@end

