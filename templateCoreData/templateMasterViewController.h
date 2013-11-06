//
//  templateMasterViewController.h
//  templateCoreData
//
//  Created by apple on 11/6/13.
//  Copyright (c) 2013 i-code-apps. All rights reserved.
//

#import <UIKit/UIKit.h>

#import <CoreData/CoreData.h>

@interface templateMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
