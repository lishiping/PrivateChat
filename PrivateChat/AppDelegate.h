//
//  AppDelegate.h
//  PrivateChat
//
//  Created by shiping li on 2018/2/28.
//  Copyright © 2018年 shiping li. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

