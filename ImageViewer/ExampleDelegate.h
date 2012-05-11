//
//  ExampleDelegate.h
//  ImageViewer
//
//  Created by Adrian Florian on 5/11/12.
//  Copyright (c) 2012 Adrian Florian. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "AFImageViewer.h"

@interface ExampleDelegate : UIViewController<AFImageViewerDelegate>

@property (strong, nonatomic) IBOutlet AFImageViewer *imageViewer;

@end
