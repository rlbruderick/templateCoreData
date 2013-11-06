//
//  templateAppDelegate.h
//  templateCoreData
//
//  Created by apple on 11/6/13.
//  Copyright (c) 2013 i-code-apps. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface templateAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@end
