//
//  TPAppDelegate.h
//  cisimple
//
//  Created by Michał Smulski on 11.12.2012.
//  Copyright (c) 2012 tap. All rights reserved.
//

#import <UIKit/UIKit.h>

@class TPMainViewController;

@interface TPAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (strong, nonatomic) TPMainViewController *mainViewController;

@end
