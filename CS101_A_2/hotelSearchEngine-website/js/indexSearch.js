
//search and booking

//verabiles  "search-bar" star-date "end-date" "number-rooms" "number-guests"


document.addEventListener('DOMContentLoaded', ()=>{
       
    
    //find ids and assin them to a var
    let searchObj={
        searchloc:document.getElementById("search-bar-id"),
        dateStart:document.getElementById("start-date"),
        dateEnd:document.getElementById("end-date"),
        numberRooms:document.getElementById("number-rooms-id"),
        numberGuests: document.getElementById("number-guests-id")
    };
    
    let currentDate = new Date();
    // searchObj.dateStart.min = currentDate.toLocaleDateString();
    // searchObj.dateEnd.min = currentDate.toLocaleDateString();
    // //searchObj.dateStart.min = currentDate.getTime(); 
    // //searchObj.dateEnd.min = currentDate.getTime();
    // console.log(searchObj.dateStart.min = currentDate.toLocaleDateString());


    //lisin for submit button pressed
    document.addEventListener('submit', function(event){let savedSearchToString;
        event.preventDefault(); 
        
       //assine the value of user input into a object to save in a json
        let saveSearchObj ={
            searchBarValue : searchObj.searchloc.value,
            startDateValue : searchObj.dateStart.value,
            endDateValue : searchObj.dateEnd.value,
            roomNumberValue : searchObj.numberRooms.value,
            guestsNumberValue : searchObj.numberGuests.value
        }
        
        let fDate = new Date(saveSearchObj.startDateValue);
        let lDate = new Date(saveSearchObj.endDateValue);
        //check value was assind probplie 
        //console.log(saveSearchObj);
        if(saveSearchObj.searchBarValue != null){
            savedSearchToString = JSON.stringify(saveSearchObj);
            //alert("not null")
        }
        
        //save user input
        if(savedSearchToString != "{}"){
            localStorage.setItem("searchJSONSaved", savedSearchToString);
            // console.log("Ture");
            // alert(savedSearchToString);
            
        }    
        
        

        if(fDate.getTime() < lDate.getTime() && fDate.getTime() >= currentDate.getTime()){
            window.location.assign("./search.html");
        }else{
            alert('your Check in date cant be before current day and after check out date thank you.');
        }



        
    });
       
    
     
});

