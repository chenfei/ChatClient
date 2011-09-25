//
//  ChatClientAppDelegate.h
//  ChatClient
//
//  Created by chen fei on 11-9-25.
//  Copyright 2011年 founder. All rights reserved.
//

#import <UIKit/UIKit.h>

@class ChatClientViewController;

@interface ChatClientAppDelegate : NSObject <UIApplicationDelegate>

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet ChatClientViewController *viewController;

@end
