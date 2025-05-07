pipeline {
  agent any
  stages {
    stage('Backup and Audit') {
	    steps {
		    sh '''
      #!/bin/bash

#$repo_list is the file contains git repo URL
REPO_LIST=repo_list.txt

#Genearte date
TODAY=$(date +%Y%m%d)

sudo chmod -R 755 /home/ubuntu

#Backup directory
BACKUP_DIR="/home/ubuntu/Jenkins/Backup_Audit"

sudo mkdir $BACKUP_DIR

while read line
do
	
	repo_name=$(basename $line .git)

	repo_path=$BACKUP_DIR/$repo_name)

	if [ ! -d $repo_path/.git ];then
		echo " clone started for $repo_name"
		git clone "$line" "$repo_path"
		if [ $? -eq 0 ];then
			echo "clone is successful for $repo_name"
		else
			echo "clone is failed for $repo_name,trying to pull"
			continue  				
		fi			
	else
		cd $repo_path || continue 		
		git pull "$line" "$repo_path"
		if [ $? -eq 0 ];then
			echo "pulling is completed"
		else
			echo "Pulling is failed"
			continue
		fi
	fi

	#create a tar file for the repo
	tar -czf $BACKUP_DIR/$repo_name-$TODAY.tar.gz -C "$BACKUP_DIR" 'repo_name"

	#-C "$BACKUP_DIR": Changes the working directory to $BACKUP_DIR before adding files to the archive
	#"${repo_name}": The directory to archive, relative to $BACKUP_DIR

	#create a commit log for the repo
	cd $repo_path || continue 	
	git log --since=1.day > $BACKUP_DIR/audit-$repo_name-$TODAY.txt
	
done<$REPO_LIST
sudo chmod -R 750 /home/ubuntu
'''
    }
  }
}
}
