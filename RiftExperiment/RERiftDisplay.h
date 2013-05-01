//
//  RERiftDisplay.h
//  RiftExperiment
//
//  Created by Lane Phillips on 5/1/13.
//  Copyright (c) 2013 Milk LLC. All rights reserved.
//

#import <Foundation/Foundation.h>

@class RERiftDisplay;

@protocol RERiftDisplayDelegate <NSObject>

@optional
-(void)riftDidConnect:(RERiftDisplay*)rift;
-(void)riftDidDisconnect:(RERiftDisplay*)rift;

@end

#define kRERiftDidConnectNotification (@"RERiftDidConnectNotification")
#define kRERiftDidDisconnectNotification (@"RERiftDidDisconnectNotification")

@interface RERiftDisplay : NSObject

// the screen and window for the connected device, or nil if not connected
@property (readonly,nonatomic) UIScreen* screen;
@property (readonly,nonatomic) UIWindow* window;

@property (nonatomic) NSObject<RERiftDisplayDelegate>* delegate;

// the shared instance
+(RERiftDisplay*)rift;

@end
