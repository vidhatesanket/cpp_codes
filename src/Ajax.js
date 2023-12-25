import axios from 'axios';
import {useState} from 'React';


export default function Ajax() {
   let [firstName,setFirstName]=useState("")
   let [lastName,setSecondName]=useState("")
   let [image,setImage]=useState("")

   function handler(){
    let promise=axios.get("https://reqres.in/api/users/2")
    promise.then((response)=>{
        setFirstName(response.data.data.first_name);
        setSecondName(response.data.data.last_name);
        setImage(response.data.data.avatar);
    },(reject)=>{
        console.log("something wrong",reject);
    })
        
    }

    

    return(
        <>
        <input type="submit" value="get" onClick={handler}></input>
        <p>{firstName}{lastName}</p>
        <img src={image} width={"120px"} height={"120px"}> </img>
        </>
    );

}