//
//  RootViewController.h
//  IUPUINavigator
//
//  Created by Patrick Proctor on 10/21/09.
//  Copyright Soylent Industries 2009. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface RootViewController : UITableViewController <NSFetchedResultsControllerDelegate> {
	NSFetchedResultsController *fetchedResultsController;
	NSManagedObjectContext *managedObjectContext;
}

- (IBAction)push:(id)sender;

@property (nonatomic, retain) NSFetchedResultsController *fetchedResultsController;
@property (nonatomic, retain) NSManagedObjectContext *managedObjectContext;

@end
