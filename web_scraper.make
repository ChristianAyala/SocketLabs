; ----------------
; Generated makefile from http://drushmake.me
; Permanent URL: http://drushmake.me/file.php?token=9f80c2dd6c16
; ----------------
;
; This is a working makefile - try it! Any line starting with a `;` is a comment.
  
; Core version
; ------------
; Each makefile should begin by declaring the core version of Drupal that all
; projects should be compatible with.
  
core = 7.x
  
; API version
; ------------
; Every makefile needs to declare its Drush Make API version. This version of
; drush make uses API version `2`.
  
api = 2
  
; Core project
; ------------
; In order for your makefile to generate a full Drupal site, you must include
; a core project. This is usually Drupal core, but you can also specify
; alternative core projects like Pressflow. Note that makefiles included with
; install profiles *should not* include a core project.
  
; Drupal 7.x. Requires the `core` property to be set to 7.x.
projects[drupal][version] = 7

  
  
; Modules
; --------
projects[contemplate][subdir] = contrib
projects[email][subdir] = contrib
projects[ctools][subdir] = contrib
projects[features][subdir] = contrib
projects[imageapi][subdir] = contrib
projects[token][subdir] = contrib
projects[views][subdir] = contrib
projects[example_web_scraper][subdir] = contrib
projects[feeds][version] = 2.0-alpha3
projects[feeds][subdir] = contrib
projects[job_scheduler][version] = 2.0-alpha2
projects[job_scheduler][subdir] = contrib
projects[feeds_xpathparser][subdir] = contrib
projects[feeds_crawler][subdir] = contrib
projects[feeds_selfnode_processor][subdir] = contrib
projects[feeds_tamper][subdir] = contrib

  

; Themes
; --------

  
  
; Libraries
; ---------
; No libraries were included


