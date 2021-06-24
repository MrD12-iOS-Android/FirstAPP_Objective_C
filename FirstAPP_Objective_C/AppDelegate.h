//
//  AppDelegate.h
//  FirstAPP_Objective_C
//
//  Created by Oybek Iskandarov on 6/24/21.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

